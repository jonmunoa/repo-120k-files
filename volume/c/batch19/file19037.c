// fichero 19037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19037;

Registro19037 crear_registro19037(int id) {
    Registro19037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19037(Registro19037 r) {
    return r.valor + r.id;
}
