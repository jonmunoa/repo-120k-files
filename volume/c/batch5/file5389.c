// fichero 5389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5389;

Registro5389 crear_registro5389(int id) {
    Registro5389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5389(Registro5389 r) {
    return r.valor + r.id;
}
