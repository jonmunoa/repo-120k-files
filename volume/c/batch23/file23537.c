// fichero 23537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23537;

Registro23537 crear_registro23537(int id) {
    Registro23537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23537(Registro23537 r) {
    return r.valor + r.id;
}
