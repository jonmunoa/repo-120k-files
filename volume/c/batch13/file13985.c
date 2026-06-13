// fichero 13985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13985;

Registro13985 crear_registro13985(int id) {
    Registro13985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13985(Registro13985 r) {
    return r.valor + r.id;
}
