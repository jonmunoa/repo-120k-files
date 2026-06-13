// fichero 23769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23769;

Registro23769 crear_registro23769(int id) {
    Registro23769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23769(Registro23769 r) {
    return r.valor + r.id;
}
