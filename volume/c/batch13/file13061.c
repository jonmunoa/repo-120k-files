// fichero 13061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13061;

Registro13061 crear_registro13061(int id) {
    Registro13061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13061(Registro13061 r) {
    return r.valor + r.id;
}
