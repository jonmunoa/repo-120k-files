// fichero 13341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13341;

Registro13341 crear_registro13341(int id) {
    Registro13341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13341(Registro13341 r) {
    return r.valor + r.id;
}
