// fichero 35457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35457;

Registro35457 crear_registro35457(int id) {
    Registro35457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35457(Registro35457 r) {
    return r.valor + r.id;
}
