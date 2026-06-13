// fichero 50677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50677;

Registro50677 crear_registro50677(int id) {
    Registro50677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50677(Registro50677 r) {
    return r.valor + r.id;
}
