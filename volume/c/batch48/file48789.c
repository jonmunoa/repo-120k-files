// fichero 48789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48789;

Registro48789 crear_registro48789(int id) {
    Registro48789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48789(Registro48789 r) {
    return r.valor + r.id;
}
