// fichero 23157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23157;

Registro23157 crear_registro23157(int id) {
    Registro23157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23157(Registro23157 r) {
    return r.valor + r.id;
}
