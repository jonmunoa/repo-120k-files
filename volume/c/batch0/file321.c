// fichero 321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro321;

Registro321 crear_registro321(int id) {
    Registro321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro321(Registro321 r) {
    return r.valor + r.id;
}
