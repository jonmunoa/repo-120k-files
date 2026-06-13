// fichero 15073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15073;

Registro15073 crear_registro15073(int id) {
    Registro15073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15073(Registro15073 r) {
    return r.valor + r.id;
}
