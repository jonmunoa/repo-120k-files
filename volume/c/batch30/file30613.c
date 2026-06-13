// fichero 30613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30613;

Registro30613 crear_registro30613(int id) {
    Registro30613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30613(Registro30613 r) {
    return r.valor + r.id;
}
