// fichero 4669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4669;

Registro4669 crear_registro4669(int id) {
    Registro4669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4669(Registro4669 r) {
    return r.valor + r.id;
}
