// fichero 18725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18725;

Registro18725 crear_registro18725(int id) {
    Registro18725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18725(Registro18725 r) {
    return r.valor + r.id;
}
