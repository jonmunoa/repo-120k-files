// fichero 26885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26885;

Registro26885 crear_registro26885(int id) {
    Registro26885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26885(Registro26885 r) {
    return r.valor + r.id;
}
