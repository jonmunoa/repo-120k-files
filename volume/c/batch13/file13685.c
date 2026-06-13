// fichero 13685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13685;

Registro13685 crear_registro13685(int id) {
    Registro13685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13685(Registro13685 r) {
    return r.valor + r.id;
}
