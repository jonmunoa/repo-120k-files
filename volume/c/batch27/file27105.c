// fichero 27105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27105;

Registro27105 crear_registro27105(int id) {
    Registro27105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27105(Registro27105 r) {
    return r.valor + r.id;
}
