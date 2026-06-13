// fichero 13493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13493;

Registro13493 crear_registro13493(int id) {
    Registro13493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13493(Registro13493 r) {
    return r.valor + r.id;
}
