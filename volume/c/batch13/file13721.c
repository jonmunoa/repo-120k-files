// fichero 13721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13721;

Registro13721 crear_registro13721(int id) {
    Registro13721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13721(Registro13721 r) {
    return r.valor + r.id;
}
