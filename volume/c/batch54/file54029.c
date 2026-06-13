// fichero 54029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54029;

Registro54029 crear_registro54029(int id) {
    Registro54029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54029(Registro54029 r) {
    return r.valor + r.id;
}
