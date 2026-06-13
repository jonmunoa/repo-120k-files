// fichero 14297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14297;

Registro14297 crear_registro14297(int id) {
    Registro14297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14297(Registro14297 r) {
    return r.valor + r.id;
}
