// fichero 44233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44233;

Registro44233 crear_registro44233(int id) {
    Registro44233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44233(Registro44233 r) {
    return r.valor + r.id;
}
