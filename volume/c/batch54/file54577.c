// fichero 54577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54577;

Registro54577 crear_registro54577(int id) {
    Registro54577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54577(Registro54577 r) {
    return r.valor + r.id;
}
