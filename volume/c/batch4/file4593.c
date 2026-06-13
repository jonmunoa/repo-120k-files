// fichero 4593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4593;

Registro4593 crear_registro4593(int id) {
    Registro4593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4593(Registro4593 r) {
    return r.valor + r.id;
}
