// fichero 40613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40613;

Registro40613 crear_registro40613(int id) {
    Registro40613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40613(Registro40613 r) {
    return r.valor + r.id;
}
