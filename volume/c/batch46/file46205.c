// fichero 46205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46205;

Registro46205 crear_registro46205(int id) {
    Registro46205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46205(Registro46205 r) {
    return r.valor + r.id;
}
