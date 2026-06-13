// fichero 15465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15465;

Registro15465 crear_registro15465(int id) {
    Registro15465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15465(Registro15465 r) {
    return r.valor + r.id;
}
