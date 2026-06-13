// fichero 20405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20405;

Registro20405 crear_registro20405(int id) {
    Registro20405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20405(Registro20405 r) {
    return r.valor + r.id;
}
