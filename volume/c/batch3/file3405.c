// fichero 3405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3405;

Registro3405 crear_registro3405(int id) {
    Registro3405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3405(Registro3405 r) {
    return r.valor + r.id;
}
