// fichero 44457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44457;

Registro44457 crear_registro44457(int id) {
    Registro44457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44457(Registro44457 r) {
    return r.valor + r.id;
}
