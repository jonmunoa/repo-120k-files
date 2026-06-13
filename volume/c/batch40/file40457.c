// fichero 40457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40457;

Registro40457 crear_registro40457(int id) {
    Registro40457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40457(Registro40457 r) {
    return r.valor + r.id;
}
