// fichero 34597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34597;

Registro34597 crear_registro34597(int id) {
    Registro34597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34597(Registro34597 r) {
    return r.valor + r.id;
}
