// fichero 21373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21373;

Registro21373 crear_registro21373(int id) {
    Registro21373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21373(Registro21373 r) {
    return r.valor + r.id;
}
