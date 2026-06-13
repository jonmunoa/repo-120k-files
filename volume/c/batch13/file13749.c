// fichero 13749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13749;

Registro13749 crear_registro13749(int id) {
    Registro13749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13749(Registro13749 r) {
    return r.valor + r.id;
}
