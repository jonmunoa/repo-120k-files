// fichero 13189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13189;

Registro13189 crear_registro13189(int id) {
    Registro13189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13189(Registro13189 r) {
    return r.valor + r.id;
}
