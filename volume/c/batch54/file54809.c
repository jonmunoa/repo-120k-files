// fichero 54809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54809;

Registro54809 crear_registro54809(int id) {
    Registro54809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54809(Registro54809 r) {
    return r.valor + r.id;
}
