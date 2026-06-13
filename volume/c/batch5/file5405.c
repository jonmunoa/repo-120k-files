// fichero 5405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5405;

Registro5405 crear_registro5405(int id) {
    Registro5405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5405(Registro5405 r) {
    return r.valor + r.id;
}
