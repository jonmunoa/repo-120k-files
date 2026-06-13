// fichero 4401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4401;

Registro4401 crear_registro4401(int id) {
    Registro4401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4401(Registro4401 r) {
    return r.valor + r.id;
}
