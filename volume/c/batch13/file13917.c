// fichero 13917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13917;

Registro13917 crear_registro13917(int id) {
    Registro13917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13917(Registro13917 r) {
    return r.valor + r.id;
}
