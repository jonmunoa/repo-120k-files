// fichero 20973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20973;

Registro20973 crear_registro20973(int id) {
    Registro20973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20973(Registro20973 r) {
    return r.valor + r.id;
}
