// fichero 13745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13745;

Registro13745 crear_registro13745(int id) {
    Registro13745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13745(Registro13745 r) {
    return r.valor + r.id;
}
