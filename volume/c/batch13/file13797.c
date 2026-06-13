// fichero 13797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13797;

Registro13797 crear_registro13797(int id) {
    Registro13797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13797(Registro13797 r) {
    return r.valor + r.id;
}
