// fichero 50457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50457;

Registro50457 crear_registro50457(int id) {
    Registro50457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50457(Registro50457 r) {
    return r.valor + r.id;
}
