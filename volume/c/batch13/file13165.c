// fichero 13165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13165;

Registro13165 crear_registro13165(int id) {
    Registro13165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13165(Registro13165 r) {
    return r.valor + r.id;
}
