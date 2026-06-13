// fichero 393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro393;

Registro393 crear_registro393(int id) {
    Registro393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro393(Registro393 r) {
    return r.valor + r.id;
}
