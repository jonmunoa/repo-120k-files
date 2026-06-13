// fichero 54789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54789;

Registro54789 crear_registro54789(int id) {
    Registro54789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54789(Registro54789 r) {
    return r.valor + r.id;
}
