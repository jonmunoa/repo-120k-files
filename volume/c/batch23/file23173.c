// fichero 23173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23173;

Registro23173 crear_registro23173(int id) {
    Registro23173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23173(Registro23173 r) {
    return r.valor + r.id;
}
