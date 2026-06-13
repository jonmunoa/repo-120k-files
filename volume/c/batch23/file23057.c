// fichero 23057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23057;

Registro23057 crear_registro23057(int id) {
    Registro23057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23057(Registro23057 r) {
    return r.valor + r.id;
}
