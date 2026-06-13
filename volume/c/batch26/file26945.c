// fichero 26945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26945;

Registro26945 crear_registro26945(int id) {
    Registro26945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26945(Registro26945 r) {
    return r.valor + r.id;
}
