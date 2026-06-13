// fichero 13261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13261;

Registro13261 crear_registro13261(int id) {
    Registro13261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13261(Registro13261 r) {
    return r.valor + r.id;
}
