// fichero 34045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34045;

Registro34045 crear_registro34045(int id) {
    Registro34045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34045(Registro34045 r) {
    return r.valor + r.id;
}
