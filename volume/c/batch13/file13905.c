// fichero 13905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13905;

Registro13905 crear_registro13905(int id) {
    Registro13905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13905(Registro13905 r) {
    return r.valor + r.id;
}
