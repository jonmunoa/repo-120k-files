// fichero 2581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2581;

Registro2581 crear_registro2581(int id) {
    Registro2581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2581(Registro2581 r) {
    return r.valor + r.id;
}
