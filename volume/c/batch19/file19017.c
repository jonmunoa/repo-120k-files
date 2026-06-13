// fichero 19017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19017;

Registro19017 crear_registro19017(int id) {
    Registro19017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19017(Registro19017 r) {
    return r.valor + r.id;
}
