// fichero 26033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26033;

Registro26033 crear_registro26033(int id) {
    Registro26033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26033(Registro26033 r) {
    return r.valor + r.id;
}
