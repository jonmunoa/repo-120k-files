// fichero 5365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5365;

Registro5365 crear_registro5365(int id) {
    Registro5365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5365(Registro5365 r) {
    return r.valor + r.id;
}
