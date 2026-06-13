// fichero 29349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29349;

Registro29349 crear_registro29349(int id) {
    Registro29349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29349(Registro29349 r) {
    return r.valor + r.id;
}
