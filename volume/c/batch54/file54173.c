// fichero 54173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54173;

Registro54173 crear_registro54173(int id) {
    Registro54173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54173(Registro54173 r) {
    return r.valor + r.id;
}
