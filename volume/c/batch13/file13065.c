// fichero 13065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13065;

Registro13065 crear_registro13065(int id) {
    Registro13065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13065(Registro13065 r) {
    return r.valor + r.id;
}
