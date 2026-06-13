// fichero 3341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3341;

Registro3341 crear_registro3341(int id) {
    Registro3341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3341(Registro3341 r) {
    return r.valor + r.id;
}
