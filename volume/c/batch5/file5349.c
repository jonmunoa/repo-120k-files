// fichero 5349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5349;

Registro5349 crear_registro5349(int id) {
    Registro5349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5349(Registro5349 r) {
    return r.valor + r.id;
}
