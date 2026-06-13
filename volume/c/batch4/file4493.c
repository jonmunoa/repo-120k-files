// fichero 4493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4493;

Registro4493 crear_registro4493(int id) {
    Registro4493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4493(Registro4493 r) {
    return r.valor + r.id;
}
