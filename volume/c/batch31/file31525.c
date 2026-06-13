// fichero 31525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31525;

Registro31525 crear_registro31525(int id) {
    Registro31525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31525(Registro31525 r) {
    return r.valor + r.id;
}
