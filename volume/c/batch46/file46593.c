// fichero 46593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46593;

Registro46593 crear_registro46593(int id) {
    Registro46593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46593(Registro46593 r) {
    return r.valor + r.id;
}
