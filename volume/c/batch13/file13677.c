// fichero 13677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13677;

Registro13677 crear_registro13677(int id) {
    Registro13677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13677(Registro13677 r) {
    return r.valor + r.id;
}
