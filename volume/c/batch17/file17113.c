// fichero 17113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17113;

Registro17113 crear_registro17113(int id) {
    Registro17113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17113(Registro17113 r) {
    return r.valor + r.id;
}
