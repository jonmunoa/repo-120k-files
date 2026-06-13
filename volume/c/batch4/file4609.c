// fichero 4609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4609;

Registro4609 crear_registro4609(int id) {
    Registro4609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4609(Registro4609 r) {
    return r.valor + r.id;
}
