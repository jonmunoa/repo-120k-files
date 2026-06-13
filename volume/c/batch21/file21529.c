// fichero 21529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21529;

Registro21529 crear_registro21529(int id) {
    Registro21529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21529(Registro21529 r) {
    return r.valor + r.id;
}
