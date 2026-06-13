// fichero 21653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21653;

Registro21653 crear_registro21653(int id) {
    Registro21653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21653(Registro21653 r) {
    return r.valor + r.id;
}
