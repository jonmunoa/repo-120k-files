// fichero 30641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30641;

Registro30641 crear_registro30641(int id) {
    Registro30641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30641(Registro30641 r) {
    return r.valor + r.id;
}
