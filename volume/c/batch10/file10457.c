// fichero 10457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10457;

Registro10457 crear_registro10457(int id) {
    Registro10457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10457(Registro10457 r) {
    return r.valor + r.id;
}
