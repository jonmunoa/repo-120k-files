// fichero 2293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2293;

Registro2293 crear_registro2293(int id) {
    Registro2293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2293(Registro2293 r) {
    return r.valor + r.id;
}
