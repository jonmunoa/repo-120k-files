// fichero 2973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2973;

Registro2973 crear_registro2973(int id) {
    Registro2973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2973(Registro2973 r) {
    return r.valor + r.id;
}
