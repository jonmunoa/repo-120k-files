// fichero 13393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13393;

Registro13393 crear_registro13393(int id) {
    Registro13393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13393(Registro13393 r) {
    return r.valor + r.id;
}
