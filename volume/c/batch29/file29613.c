// fichero 29613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29613;

Registro29613 crear_registro29613(int id) {
    Registro29613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29613(Registro29613 r) {
    return r.valor + r.id;
}
