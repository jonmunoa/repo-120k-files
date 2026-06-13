// fichero 27653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27653;

Registro27653 crear_registro27653(int id) {
    Registro27653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27653(Registro27653 r) {
    return r.valor + r.id;
}
