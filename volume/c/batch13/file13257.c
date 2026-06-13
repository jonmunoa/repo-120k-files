// fichero 13257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13257;

Registro13257 crear_registro13257(int id) {
    Registro13257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13257(Registro13257 r) {
    return r.valor + r.id;
}
