// fichero 13621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13621;

Registro13621 crear_registro13621(int id) {
    Registro13621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13621(Registro13621 r) {
    return r.valor + r.id;
}
