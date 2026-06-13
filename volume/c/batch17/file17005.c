// fichero 17005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17005;

Registro17005 crear_registro17005(int id) {
    Registro17005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17005(Registro17005 r) {
    return r.valor + r.id;
}
