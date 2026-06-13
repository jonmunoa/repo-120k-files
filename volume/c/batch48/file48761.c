// fichero 48761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48761;

Registro48761 crear_registro48761(int id) {
    Registro48761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48761(Registro48761 r) {
    return r.valor + r.id;
}
