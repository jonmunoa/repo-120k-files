// fichero 1457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1457;

Registro1457 crear_registro1457(int id) {
    Registro1457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1457(Registro1457 r) {
    return r.valor + r.id;
}
