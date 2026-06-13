// fichero 15549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15549;

Registro15549 crear_registro15549(int id) {
    Registro15549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15549(Registro15549 r) {
    return r.valor + r.id;
}
