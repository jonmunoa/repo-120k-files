// fichero 19381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19381;

Registro19381 crear_registro19381(int id) {
    Registro19381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19381(Registro19381 r) {
    return r.valor + r.id;
}
