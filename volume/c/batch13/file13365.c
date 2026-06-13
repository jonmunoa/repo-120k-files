// fichero 13365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13365;

Registro13365 crear_registro13365(int id) {
    Registro13365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13365(Registro13365 r) {
    return r.valor + r.id;
}
