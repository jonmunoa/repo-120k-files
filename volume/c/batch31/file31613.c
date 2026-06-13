// fichero 31613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31613;

Registro31613 crear_registro31613(int id) {
    Registro31613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31613(Registro31613 r) {
    return r.valor + r.id;
}
