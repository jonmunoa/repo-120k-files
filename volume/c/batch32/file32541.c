// fichero 32541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32541;

Registro32541 crear_registro32541(int id) {
    Registro32541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32541(Registro32541 r) {
    return r.valor + r.id;
}
