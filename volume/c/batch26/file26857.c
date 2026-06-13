// fichero 26857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26857;

Registro26857 crear_registro26857(int id) {
    Registro26857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26857(Registro26857 r) {
    return r.valor + r.id;
}
