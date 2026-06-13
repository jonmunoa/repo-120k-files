// fichero 46277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46277;

Registro46277 crear_registro46277(int id) {
    Registro46277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46277(Registro46277 r) {
    return r.valor + r.id;
}
