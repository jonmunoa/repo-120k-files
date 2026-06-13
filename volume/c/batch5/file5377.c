// fichero 5377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5377;

Registro5377 crear_registro5377(int id) {
    Registro5377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5377(Registro5377 r) {
    return r.valor + r.id;
}
