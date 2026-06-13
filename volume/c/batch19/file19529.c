// fichero 19529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19529;

Registro19529 crear_registro19529(int id) {
    Registro19529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19529(Registro19529 r) {
    return r.valor + r.id;
}
