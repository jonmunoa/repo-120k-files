// fichero 13345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13345;

Registro13345 crear_registro13345(int id) {
    Registro13345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13345(Registro13345 r) {
    return r.valor + r.id;
}
