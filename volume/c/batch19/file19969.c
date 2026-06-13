// fichero 19969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19969;

Registro19969 crear_registro19969(int id) {
    Registro19969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19969(Registro19969 r) {
    return r.valor + r.id;
}
