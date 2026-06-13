// fichero 13821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13821;

Registro13821 crear_registro13821(int id) {
    Registro13821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13821(Registro13821 r) {
    return r.valor + r.id;
}
