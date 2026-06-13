// fichero 13301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13301;

Registro13301 crear_registro13301(int id) {
    Registro13301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13301(Registro13301 r) {
    return r.valor + r.id;
}
