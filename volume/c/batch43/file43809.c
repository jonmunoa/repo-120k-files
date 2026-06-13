// fichero 43809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43809;

Registro43809 crear_registro43809(int id) {
    Registro43809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43809(Registro43809 r) {
    return r.valor + r.id;
}
