// fichero 2909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2909;

Registro2909 crear_registro2909(int id) {
    Registro2909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2909(Registro2909 r) {
    return r.valor + r.id;
}
