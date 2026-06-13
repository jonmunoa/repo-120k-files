// fichero 45185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45185;

Registro45185 crear_registro45185(int id) {
    Registro45185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45185(Registro45185 r) {
    return r.valor + r.id;
}
