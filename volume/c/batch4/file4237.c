// fichero 4237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4237;

Registro4237 crear_registro4237(int id) {
    Registro4237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4237(Registro4237 r) {
    return r.valor + r.id;
}
