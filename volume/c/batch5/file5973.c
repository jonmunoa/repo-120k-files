// fichero 5973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5973;

Registro5973 crear_registro5973(int id) {
    Registro5973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5973(Registro5973 r) {
    return r.valor + r.id;
}
