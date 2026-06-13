// fichero 5477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5477;

Registro5477 crear_registro5477(int id) {
    Registro5477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5477(Registro5477 r) {
    return r.valor + r.id;
}
