// fichero 38653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38653;

Registro38653 crear_registro38653(int id) {
    Registro38653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38653(Registro38653 r) {
    return r.valor + r.id;
}
