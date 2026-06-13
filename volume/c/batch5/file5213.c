// fichero 5213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5213;

Registro5213 crear_registro5213(int id) {
    Registro5213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5213(Registro5213 r) {
    return r.valor + r.id;
}
