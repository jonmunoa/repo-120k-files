// fichero 15449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15449;

Registro15449 crear_registro15449(int id) {
    Registro15449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15449(Registro15449 r) {
    return r.valor + r.id;
}
