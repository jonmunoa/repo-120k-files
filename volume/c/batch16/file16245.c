// fichero 16245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16245;

Registro16245 crear_registro16245(int id) {
    Registro16245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16245(Registro16245 r) {
    return r.valor + r.id;
}
