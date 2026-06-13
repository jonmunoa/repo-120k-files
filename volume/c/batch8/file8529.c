// fichero 8529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8529;

Registro8529 crear_registro8529(int id) {
    Registro8529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8529(Registro8529 r) {
    return r.valor + r.id;
}
