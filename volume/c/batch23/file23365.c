// fichero 23365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23365;

Registro23365 crear_registro23365(int id) {
    Registro23365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23365(Registro23365 r) {
    return r.valor + r.id;
}
