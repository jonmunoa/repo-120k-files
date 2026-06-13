// fichero 54001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54001;

Registro54001 crear_registro54001(int id) {
    Registro54001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54001(Registro54001 r) {
    return r.valor + r.id;
}
