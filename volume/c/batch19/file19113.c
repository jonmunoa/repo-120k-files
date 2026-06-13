// fichero 19113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19113;

Registro19113 crear_registro19113(int id) {
    Registro19113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19113(Registro19113 r) {
    return r.valor + r.id;
}
