// fichero 13617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13617;

Registro13617 crear_registro13617(int id) {
    Registro13617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13617(Registro13617 r) {
    return r.valor + r.id;
}
