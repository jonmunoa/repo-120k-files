// fichero 14393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14393;

Registro14393 crear_registro14393(int id) {
    Registro14393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14393(Registro14393 r) {
    return r.valor + r.id;
}
