// fichero 13697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13697;

Registro13697 crear_registro13697(int id) {
    Registro13697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13697(Registro13697 r) {
    return r.valor + r.id;
}
