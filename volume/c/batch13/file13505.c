// fichero 13505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13505;

Registro13505 crear_registro13505(int id) {
    Registro13505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13505(Registro13505 r) {
    return r.valor + r.id;
}
