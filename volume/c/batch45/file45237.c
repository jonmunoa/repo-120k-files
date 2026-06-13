// fichero 45237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45237;

Registro45237 crear_registro45237(int id) {
    Registro45237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45237(Registro45237 r) {
    return r.valor + r.id;
}
