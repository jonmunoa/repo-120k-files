// fichero 28405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28405;

Registro28405 crear_registro28405(int id) {
    Registro28405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28405(Registro28405 r) {
    return r.valor + r.id;
}
