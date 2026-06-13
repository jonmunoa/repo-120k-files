// fichero 2605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2605;

Registro2605 crear_registro2605(int id) {
    Registro2605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2605(Registro2605 r) {
    return r.valor + r.id;
}
