// fichero 49385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49385;

Registro49385 crear_registro49385(int id) {
    Registro49385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49385(Registro49385 r) {
    return r.valor + r.id;
}
