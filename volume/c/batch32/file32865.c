// fichero 32865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32865;

Registro32865 crear_registro32865(int id) {
    Registro32865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32865(Registro32865 r) {
    return r.valor + r.id;
}
