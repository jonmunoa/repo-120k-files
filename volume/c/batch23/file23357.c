// fichero 23357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23357;

Registro23357 crear_registro23357(int id) {
    Registro23357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23357(Registro23357 r) {
    return r.valor + r.id;
}
