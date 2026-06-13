// fichero 23461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23461;

Registro23461 crear_registro23461(int id) {
    Registro23461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23461(Registro23461 r) {
    return r.valor + r.id;
}
