// fichero 13381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13381;

Registro13381 crear_registro13381(int id) {
    Registro13381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13381(Registro13381 r) {
    return r.valor + r.id;
}
