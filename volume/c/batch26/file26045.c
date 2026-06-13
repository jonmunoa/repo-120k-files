// fichero 26045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26045;

Registro26045 crear_registro26045(int id) {
    Registro26045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26045(Registro26045 r) {
    return r.valor + r.id;
}
