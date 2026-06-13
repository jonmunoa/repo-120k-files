// fichero 16797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16797;

Registro16797 crear_registro16797(int id) {
    Registro16797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16797(Registro16797 r) {
    return r.valor + r.id;
}
