// fichero 13017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13017;

Registro13017 crear_registro13017(int id) {
    Registro13017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13017(Registro13017 r) {
    return r.valor + r.id;
}
