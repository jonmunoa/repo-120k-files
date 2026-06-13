// fichero 43305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43305;

Registro43305 crear_registro43305(int id) {
    Registro43305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43305(Registro43305 r) {
    return r.valor + r.id;
}
