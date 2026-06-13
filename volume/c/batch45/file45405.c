// fichero 45405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45405;

Registro45405 crear_registro45405(int id) {
    Registro45405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45405(Registro45405 r) {
    return r.valor + r.id;
}
