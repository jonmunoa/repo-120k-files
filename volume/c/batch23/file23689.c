// fichero 23689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23689;

Registro23689 crear_registro23689(int id) {
    Registro23689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23689(Registro23689 r) {
    return r.valor + r.id;
}
