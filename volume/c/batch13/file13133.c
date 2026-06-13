// fichero 13133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13133;

Registro13133 crear_registro13133(int id) {
    Registro13133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13133(Registro13133 r) {
    return r.valor + r.id;
}
