// fichero 49405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49405;

Registro49405 crear_registro49405(int id) {
    Registro49405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49405(Registro49405 r) {
    return r.valor + r.id;
}
