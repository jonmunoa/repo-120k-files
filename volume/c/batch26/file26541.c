// fichero 26541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26541;

Registro26541 crear_registro26541(int id) {
    Registro26541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26541(Registro26541 r) {
    return r.valor + r.id;
}
