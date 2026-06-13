// fichero 19329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19329;

Registro19329 crear_registro19329(int id) {
    Registro19329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19329(Registro19329 r) {
    return r.valor + r.id;
}
