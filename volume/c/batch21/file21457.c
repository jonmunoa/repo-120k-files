// fichero 21457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21457;

Registro21457 crear_registro21457(int id) {
    Registro21457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21457(Registro21457 r) {
    return r.valor + r.id;
}
