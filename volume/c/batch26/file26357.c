// fichero 26357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26357;

Registro26357 crear_registro26357(int id) {
    Registro26357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26357(Registro26357 r) {
    return r.valor + r.id;
}
