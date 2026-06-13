// fichero 26285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26285;

Registro26285 crear_registro26285(int id) {
    Registro26285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26285(Registro26285 r) {
    return r.valor + r.id;
}
