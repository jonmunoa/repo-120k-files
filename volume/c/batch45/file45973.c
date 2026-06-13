// fichero 45973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45973;

Registro45973 crear_registro45973(int id) {
    Registro45973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45973(Registro45973 r) {
    return r.valor + r.id;
}
