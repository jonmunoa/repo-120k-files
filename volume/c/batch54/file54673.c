// fichero 54673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54673;

Registro54673 crear_registro54673(int id) {
    Registro54673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54673(Registro54673 r) {
    return r.valor + r.id;
}
