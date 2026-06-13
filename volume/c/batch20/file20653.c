// fichero 20653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20653;

Registro20653 crear_registro20653(int id) {
    Registro20653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20653(Registro20653 r) {
    return r.valor + r.id;
}
