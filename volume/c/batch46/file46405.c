// fichero 46405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46405;

Registro46405 crear_registro46405(int id) {
    Registro46405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46405(Registro46405 r) {
    return r.valor + r.id;
}
