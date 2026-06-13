// fichero 16185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16185;

Registro16185 crear_registro16185(int id) {
    Registro16185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16185(Registro16185 r) {
    return r.valor + r.id;
}
