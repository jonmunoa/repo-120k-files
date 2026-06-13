// fichero 43661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43661;

Registro43661 crear_registro43661(int id) {
    Registro43661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43661(Registro43661 r) {
    return r.valor + r.id;
}
