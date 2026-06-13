// fichero 39253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39253;

Registro39253 crear_registro39253(int id) {
    Registro39253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39253(Registro39253 r) {
    return r.valor + r.id;
}
