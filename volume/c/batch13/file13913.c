// fichero 13913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13913;

Registro13913 crear_registro13913(int id) {
    Registro13913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13913(Registro13913 r) {
    return r.valor + r.id;
}
