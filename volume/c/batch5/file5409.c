// fichero 5409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5409;

Registro5409 crear_registro5409(int id) {
    Registro5409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5409(Registro5409 r) {
    return r.valor + r.id;
}
