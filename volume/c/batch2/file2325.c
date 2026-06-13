// fichero 2325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2325;

Registro2325 crear_registro2325(int id) {
    Registro2325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2325(Registro2325 r) {
    return r.valor + r.id;
}
