// fichero 23725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23725;

Registro23725 crear_registro23725(int id) {
    Registro23725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23725(Registro23725 r) {
    return r.valor + r.id;
}
