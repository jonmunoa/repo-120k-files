// fichero 39341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39341;

Registro39341 crear_registro39341(int id) {
    Registro39341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39341(Registro39341 r) {
    return r.valor + r.id;
}
