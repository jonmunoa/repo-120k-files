// fichero 125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro125;

Registro125 crear_registro125(int id) {
    Registro125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro125(Registro125 r) {
    return r.valor + r.id;
}
