// fichero 19961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19961;

Registro19961 crear_registro19961(int id) {
    Registro19961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19961(Registro19961 r) {
    return r.valor + r.id;
}
