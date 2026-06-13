// fichero 3253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3253;

Registro3253 crear_registro3253(int id) {
    Registro3253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3253(Registro3253 r) {
    return r.valor + r.id;
}
