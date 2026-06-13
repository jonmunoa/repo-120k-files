// fichero 53405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53405;

Registro53405 crear_registro53405(int id) {
    Registro53405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53405(Registro53405 r) {
    return r.valor + r.id;
}
