// fichero 26405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26405;

Registro26405 crear_registro26405(int id) {
    Registro26405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26405(Registro26405 r) {
    return r.valor + r.id;
}
