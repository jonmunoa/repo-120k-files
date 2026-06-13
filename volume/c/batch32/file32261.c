// fichero 32261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32261;

Registro32261 crear_registro32261(int id) {
    Registro32261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32261(Registro32261 r) {
    return r.valor + r.id;
}
