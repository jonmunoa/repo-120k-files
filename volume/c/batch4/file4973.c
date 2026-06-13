// fichero 4973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4973;

Registro4973 crear_registro4973(int id) {
    Registro4973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4973(Registro4973 r) {
    return r.valor + r.id;
}
