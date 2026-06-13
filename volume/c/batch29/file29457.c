// fichero 29457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29457;

Registro29457 crear_registro29457(int id) {
    Registro29457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29457(Registro29457 r) {
    return r.valor + r.id;
}
