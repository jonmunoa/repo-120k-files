// fichero 13805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13805;

Registro13805 crear_registro13805(int id) {
    Registro13805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13805(Registro13805 r) {
    return r.valor + r.id;
}
