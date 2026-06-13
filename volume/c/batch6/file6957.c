// fichero 6957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6957;

Registro6957 crear_registro6957(int id) {
    Registro6957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6957(Registro6957 r) {
    return r.valor + r.id;
}
