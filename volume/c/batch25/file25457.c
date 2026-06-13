// fichero 25457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25457;

Registro25457 crear_registro25457(int id) {
    Registro25457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25457(Registro25457 r) {
    return r.valor + r.id;
}
