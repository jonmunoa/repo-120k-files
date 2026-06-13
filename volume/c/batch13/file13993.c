// fichero 13993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13993;

Registro13993 crear_registro13993(int id) {
    Registro13993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13993(Registro13993 r) {
    return r.valor + r.id;
}
