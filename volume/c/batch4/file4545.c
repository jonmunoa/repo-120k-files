// fichero 4545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4545;

Registro4545 crear_registro4545(int id) {
    Registro4545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4545(Registro4545 r) {
    return r.valor + r.id;
}
