// fichero 23757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23757;

Registro23757 crear_registro23757(int id) {
    Registro23757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23757(Registro23757 r) {
    return r.valor + r.id;
}
