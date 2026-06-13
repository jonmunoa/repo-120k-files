// fichero 4285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4285;

Registro4285 crear_registro4285(int id) {
    Registro4285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4285(Registro4285 r) {
    return r.valor + r.id;
}
