// fichero 12857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12857;

Registro12857 crear_registro12857(int id) {
    Registro12857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12857(Registro12857 r) {
    return r.valor + r.id;
}
