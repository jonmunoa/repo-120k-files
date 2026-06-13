// fichero 46081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46081;

Registro46081 crear_registro46081(int id) {
    Registro46081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46081(Registro46081 r) {
    return r.valor + r.id;
}
