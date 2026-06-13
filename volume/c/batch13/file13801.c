// fichero 13801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13801;

Registro13801 crear_registro13801(int id) {
    Registro13801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13801(Registro13801 r) {
    return r.valor + r.id;
}
