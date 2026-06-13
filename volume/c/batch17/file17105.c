// fichero 17105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17105;

Registro17105 crear_registro17105(int id) {
    Registro17105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17105(Registro17105 r) {
    return r.valor + r.id;
}
