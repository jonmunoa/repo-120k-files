// fichero 28725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28725;

Registro28725 crear_registro28725(int id) {
    Registro28725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28725(Registro28725 r) {
    return r.valor + r.id;
}
