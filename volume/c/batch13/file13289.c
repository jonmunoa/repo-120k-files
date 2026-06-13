// fichero 13289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13289;

Registro13289 crear_registro13289(int id) {
    Registro13289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13289(Registro13289 r) {
    return r.valor + r.id;
}
