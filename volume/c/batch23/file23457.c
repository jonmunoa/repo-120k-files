// fichero 23457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23457;

Registro23457 crear_registro23457(int id) {
    Registro23457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23457(Registro23457 r) {
    return r.valor + r.id;
}
