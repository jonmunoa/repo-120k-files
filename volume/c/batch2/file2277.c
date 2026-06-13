// fichero 2277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2277;

Registro2277 crear_registro2277(int id) {
    Registro2277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2277(Registro2277 r) {
    return r.valor + r.id;
}
