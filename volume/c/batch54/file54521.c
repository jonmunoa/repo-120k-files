// fichero 54521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54521;

Registro54521 crear_registro54521(int id) {
    Registro54521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54521(Registro54521 r) {
    return r.valor + r.id;
}
