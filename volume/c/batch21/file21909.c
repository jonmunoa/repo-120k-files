// fichero 21909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21909;

Registro21909 crear_registro21909(int id) {
    Registro21909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21909(Registro21909 r) {
    return r.valor + r.id;
}
