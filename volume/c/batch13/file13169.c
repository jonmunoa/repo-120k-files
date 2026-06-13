// fichero 13169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13169;

Registro13169 crear_registro13169(int id) {
    Registro13169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13169(Registro13169 r) {
    return r.valor + r.id;
}
