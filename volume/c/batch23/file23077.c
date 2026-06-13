// fichero 23077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23077;

Registro23077 crear_registro23077(int id) {
    Registro23077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23077(Registro23077 r) {
    return r.valor + r.id;
}
