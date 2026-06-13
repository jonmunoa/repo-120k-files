// fichero 15653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15653;

Registro15653 crear_registro15653(int id) {
    Registro15653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15653(Registro15653 r) {
    return r.valor + r.id;
}
