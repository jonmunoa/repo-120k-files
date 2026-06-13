// fichero 4729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4729;

Registro4729 crear_registro4729(int id) {
    Registro4729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4729(Registro4729 r) {
    return r.valor + r.id;
}
