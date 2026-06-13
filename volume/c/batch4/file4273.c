// fichero 4273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4273;

Registro4273 crear_registro4273(int id) {
    Registro4273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4273(Registro4273 r) {
    return r.valor + r.id;
}
