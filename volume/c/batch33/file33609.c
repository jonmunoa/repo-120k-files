// fichero 33609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33609;

Registro33609 crear_registro33609(int id) {
    Registro33609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33609(Registro33609 r) {
    return r.valor + r.id;
}
