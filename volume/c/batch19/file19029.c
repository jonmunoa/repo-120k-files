// fichero 19029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19029;

Registro19029 crear_registro19029(int id) {
    Registro19029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19029(Registro19029 r) {
    return r.valor + r.id;
}
