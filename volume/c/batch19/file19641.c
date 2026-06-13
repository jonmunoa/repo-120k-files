// fichero 19641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19641;

Registro19641 crear_registro19641(int id) {
    Registro19641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19641(Registro19641 r) {
    return r.valor + r.id;
}
