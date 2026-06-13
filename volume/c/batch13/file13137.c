// fichero 13137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13137;

Registro13137 crear_registro13137(int id) {
    Registro13137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13137(Registro13137 r) {
    return r.valor + r.id;
}
