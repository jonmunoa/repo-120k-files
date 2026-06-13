// fichero 13149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13149;

Registro13149 crear_registro13149(int id) {
    Registro13149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13149(Registro13149 r) {
    return r.valor + r.id;
}
