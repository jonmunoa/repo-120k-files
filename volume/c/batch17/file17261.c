// fichero 17261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17261;

Registro17261 crear_registro17261(int id) {
    Registro17261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17261(Registro17261 r) {
    return r.valor + r.id;
}
