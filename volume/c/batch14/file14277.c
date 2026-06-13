// fichero 14277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14277;

Registro14277 crear_registro14277(int id) {
    Registro14277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14277(Registro14277 r) {
    return r.valor + r.id;
}
