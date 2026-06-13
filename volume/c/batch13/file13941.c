// fichero 13941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13941;

Registro13941 crear_registro13941(int id) {
    Registro13941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13941(Registro13941 r) {
    return r.valor + r.id;
}
