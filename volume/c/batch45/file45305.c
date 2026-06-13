// fichero 45305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45305;

Registro45305 crear_registro45305(int id) {
    Registro45305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45305(Registro45305 r) {
    return r.valor + r.id;
}
