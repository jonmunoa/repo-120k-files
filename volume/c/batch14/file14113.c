// fichero 14113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14113;

Registro14113 crear_registro14113(int id) {
    Registro14113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14113(Registro14113 r) {
    return r.valor + r.id;
}
