// fichero 8253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8253;

Registro8253 crear_registro8253(int id) {
    Registro8253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8253(Registro8253 r) {
    return r.valor + r.id;
}
