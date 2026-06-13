// fichero 13953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13953;

Registro13953 crear_registro13953(int id) {
    Registro13953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13953(Registro13953 r) {
    return r.valor + r.id;
}
