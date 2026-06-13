// fichero 14273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14273;

Registro14273 crear_registro14273(int id) {
    Registro14273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14273(Registro14273 r) {
    return r.valor + r.id;
}
