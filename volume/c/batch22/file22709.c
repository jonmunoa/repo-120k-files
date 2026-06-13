// fichero 22709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22709;

Registro22709 crear_registro22709(int id) {
    Registro22709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22709(Registro22709 r) {
    return r.valor + r.id;
}
