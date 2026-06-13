// fichero 5297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5297;

Registro5297 crear_registro5297(int id) {
    Registro5297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5297(Registro5297 r) {
    return r.valor + r.id;
}
