// fichero 13829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13829;

Registro13829 crear_registro13829(int id) {
    Registro13829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13829(Registro13829 r) {
    return r.valor + r.id;
}
