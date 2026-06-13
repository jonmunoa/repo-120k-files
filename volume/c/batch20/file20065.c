// fichero 20065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20065;

Registro20065 crear_registro20065(int id) {
    Registro20065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20065(Registro20065 r) {
    return r.valor + r.id;
}
