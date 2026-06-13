// fichero 12609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12609;

Registro12609 crear_registro12609(int id) {
    Registro12609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12609(Registro12609 r) {
    return r.valor + r.id;
}
