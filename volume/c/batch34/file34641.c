// fichero 34641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34641;

Registro34641 crear_registro34641(int id) {
    Registro34641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34641(Registro34641 r) {
    return r.valor + r.id;
}
