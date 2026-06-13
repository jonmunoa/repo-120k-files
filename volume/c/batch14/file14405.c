// fichero 14405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14405;

Registro14405 crear_registro14405(int id) {
    Registro14405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14405(Registro14405 r) {
    return r.valor + r.id;
}
