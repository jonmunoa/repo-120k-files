// fichero 13609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13609;

Registro13609 crear_registro13609(int id) {
    Registro13609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13609(Registro13609 r) {
    return r.valor + r.id;
}
