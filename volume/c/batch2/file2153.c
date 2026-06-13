// fichero 2153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2153;

Registro2153 crear_registro2153(int id) {
    Registro2153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2153(Registro2153 r) {
    return r.valor + r.id;
}
