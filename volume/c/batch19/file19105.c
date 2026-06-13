// fichero 19105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19105;

Registro19105 crear_registro19105(int id) {
    Registro19105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19105(Registro19105 r) {
    return r.valor + r.id;
}
