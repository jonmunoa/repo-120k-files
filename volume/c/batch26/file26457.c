// fichero 26457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26457;

Registro26457 crear_registro26457(int id) {
    Registro26457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26457(Registro26457 r) {
    return r.valor + r.id;
}
