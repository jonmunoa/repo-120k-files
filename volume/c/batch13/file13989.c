// fichero 13989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13989;

Registro13989 crear_registro13989(int id) {
    Registro13989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13989(Registro13989 r) {
    return r.valor + r.id;
}
