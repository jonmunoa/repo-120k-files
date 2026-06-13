// fichero 8341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8341;

Registro8341 crear_registro8341(int id) {
    Registro8341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8341(Registro8341 r) {
    return r.valor + r.id;
}
