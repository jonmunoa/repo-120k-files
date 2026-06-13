// fichero 2421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2421;

Registro2421 crear_registro2421(int id) {
    Registro2421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2421(Registro2421 r) {
    return r.valor + r.id;
}
