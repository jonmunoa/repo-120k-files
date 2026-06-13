// fichero 13933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13933;

Registro13933 crear_registro13933(int id) {
    Registro13933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13933(Registro13933 r) {
    return r.valor + r.id;
}
