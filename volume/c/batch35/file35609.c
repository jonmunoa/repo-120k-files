// fichero 35609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35609;

Registro35609 crear_registro35609(int id) {
    Registro35609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35609(Registro35609 r) {
    return r.valor + r.id;
}
