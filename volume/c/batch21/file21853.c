// fichero 21853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21853;

Registro21853 crear_registro21853(int id) {
    Registro21853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21853(Registro21853 r) {
    return r.valor + r.id;
}
