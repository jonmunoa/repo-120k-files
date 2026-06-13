// fichero 17273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17273;

Registro17273 crear_registro17273(int id) {
    Registro17273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17273(Registro17273 r) {
    return r.valor + r.id;
}
