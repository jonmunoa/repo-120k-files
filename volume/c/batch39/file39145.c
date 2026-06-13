// fichero 39145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39145;

Registro39145 crear_registro39145(int id) {
    Registro39145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39145(Registro39145 r) {
    return r.valor + r.id;
}
