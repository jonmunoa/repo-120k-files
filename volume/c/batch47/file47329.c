// fichero 47329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47329;

Registro47329 crear_registro47329(int id) {
    Registro47329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47329(Registro47329 r) {
    return r.valor + r.id;
}
