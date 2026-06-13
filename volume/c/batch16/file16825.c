// fichero 16825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16825;

Registro16825 crear_registro16825(int id) {
    Registro16825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16825(Registro16825 r) {
    return r.valor + r.id;
}
