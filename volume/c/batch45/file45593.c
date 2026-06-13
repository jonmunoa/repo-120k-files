// fichero 45593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45593;

Registro45593 crear_registro45593(int id) {
    Registro45593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45593(Registro45593 r) {
    return r.valor + r.id;
}
