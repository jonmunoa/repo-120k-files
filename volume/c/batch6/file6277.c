// fichero 6277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6277;

Registro6277 crear_registro6277(int id) {
    Registro6277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6277(Registro6277 r) {
    return r.valor + r.id;
}
