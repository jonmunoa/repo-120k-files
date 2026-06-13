// fichero 23201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23201;

Registro23201 crear_registro23201(int id) {
    Registro23201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23201(Registro23201 r) {
    return r.valor + r.id;
}
