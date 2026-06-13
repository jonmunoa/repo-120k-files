// fichero 13101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13101;

Registro13101 crear_registro13101(int id) {
    Registro13101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13101(Registro13101 r) {
    return r.valor + r.id;
}
