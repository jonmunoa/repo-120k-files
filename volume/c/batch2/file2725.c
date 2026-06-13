// fichero 2725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2725;

Registro2725 crear_registro2725(int id) {
    Registro2725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2725(Registro2725 r) {
    return r.valor + r.id;
}
