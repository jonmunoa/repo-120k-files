// fichero 39189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39189;

Registro39189 crear_registro39189(int id) {
    Registro39189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39189(Registro39189 r) {
    return r.valor + r.id;
}
