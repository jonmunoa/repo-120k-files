// fichero 43277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43277;

Registro43277 crear_registro43277(int id) {
    Registro43277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43277(Registro43277 r) {
    return r.valor + r.id;
}
