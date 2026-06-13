// fichero 45029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45029;

Registro45029 crear_registro45029(int id) {
    Registro45029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45029(Registro45029 r) {
    return r.valor + r.id;
}
