// fichero 13961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13961;

Registro13961 crear_registro13961(int id) {
    Registro13961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13961(Registro13961 r) {
    return r.valor + r.id;
}
