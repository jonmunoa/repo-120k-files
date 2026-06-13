// fichero 44613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44613;

Registro44613 crear_registro44613(int id) {
    Registro44613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44613(Registro44613 r) {
    return r.valor + r.id;
}
