// fichero 13209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13209;

Registro13209 crear_registro13209(int id) {
    Registro13209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13209(Registro13209 r) {
    return r.valor + r.id;
}
