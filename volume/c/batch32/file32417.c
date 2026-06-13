// fichero 32417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32417;

Registro32417 crear_registro32417(int id) {
    Registro32417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32417(Registro32417 r) {
    return r.valor + r.id;
}
