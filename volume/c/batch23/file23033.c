// fichero 23033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23033;

Registro23033 crear_registro23033(int id) {
    Registro23033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23033(Registro23033 r) {
    return r.valor + r.id;
}
