// fichero 29405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29405;

Registro29405 crear_registro29405(int id) {
    Registro29405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29405(Registro29405 r) {
    return r.valor + r.id;
}
