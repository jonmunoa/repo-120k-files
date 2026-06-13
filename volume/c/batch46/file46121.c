// fichero 46121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46121;

Registro46121 crear_registro46121(int id) {
    Registro46121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46121(Registro46121 r) {
    return r.valor + r.id;
}
