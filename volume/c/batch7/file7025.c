// fichero 7025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7025;

Registro7025 crear_registro7025(int id) {
    Registro7025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7025(Registro7025 r) {
    return r.valor + r.id;
}
