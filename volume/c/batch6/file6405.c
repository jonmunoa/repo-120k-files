// fichero 6405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6405;

Registro6405 crear_registro6405(int id) {
    Registro6405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6405(Registro6405 r) {
    return r.valor + r.id;
}
