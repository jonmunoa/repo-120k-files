// fichero 45081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45081;

Registro45081 crear_registro45081(int id) {
    Registro45081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45081(Registro45081 r) {
    return r.valor + r.id;
}
