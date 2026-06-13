// fichero 16381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16381;

Registro16381 crear_registro16381(int id) {
    Registro16381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16381(Registro16381 r) {
    return r.valor + r.id;
}
