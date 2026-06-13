// fichero 4853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4853;

Registro4853 crear_registro4853(int id) {
    Registro4853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4853(Registro4853 r) {
    return r.valor + r.id;
}
