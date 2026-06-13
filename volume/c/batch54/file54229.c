// fichero 54229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54229;

Registro54229 crear_registro54229(int id) {
    Registro54229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54229(Registro54229 r) {
    return r.valor + r.id;
}
