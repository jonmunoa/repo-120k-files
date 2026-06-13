// fichero 5725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5725;

Registro5725 crear_registro5725(int id) {
    Registro5725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5725(Registro5725 r) {
    return r.valor + r.id;
}
