// fichero 19245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19245;

Registro19245 crear_registro19245(int id) {
    Registro19245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19245(Registro19245 r) {
    return r.valor + r.id;
}
