// fichero 53613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53613;

Registro53613 crear_registro53613(int id) {
    Registro53613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53613(Registro53613 r) {
    return r.valor + r.id;
}
