// fichero 4749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4749;

Registro4749 crear_registro4749(int id) {
    Registro4749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4749(Registro4749 r) {
    return r.valor + r.id;
}
