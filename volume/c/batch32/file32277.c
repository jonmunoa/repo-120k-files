// fichero 32277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32277;

Registro32277 crear_registro32277(int id) {
    Registro32277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32277(Registro32277 r) {
    return r.valor + r.id;
}
