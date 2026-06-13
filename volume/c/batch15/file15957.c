// fichero 15957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15957;

Registro15957 crear_registro15957(int id) {
    Registro15957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15957(Registro15957 r) {
    return r.valor + r.id;
}
