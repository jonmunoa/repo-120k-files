// fichero 47825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47825;

Registro47825 crear_registro47825(int id) {
    Registro47825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47825(Registro47825 r) {
    return r.valor + r.id;
}
