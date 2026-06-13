// fichero 13453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13453;

Registro13453 crear_registro13453(int id) {
    Registro13453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13453(Registro13453 r) {
    return r.valor + r.id;
}
