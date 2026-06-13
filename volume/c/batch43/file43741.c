// fichero 43741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43741;

Registro43741 crear_registro43741(int id) {
    Registro43741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43741(Registro43741 r) {
    return r.valor + r.id;
}
