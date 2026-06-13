// fichero 38609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38609;

Registro38609 crear_registro38609(int id) {
    Registro38609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38609(Registro38609 r) {
    return r.valor + r.id;
}
