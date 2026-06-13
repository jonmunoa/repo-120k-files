// fichero 13853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13853;

Registro13853 crear_registro13853(int id) {
    Registro13853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13853(Registro13853 r) {
    return r.valor + r.id;
}
