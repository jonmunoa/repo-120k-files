// fichero 8457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8457;

Registro8457 crear_registro8457(int id) {
    Registro8457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8457(Registro8457 r) {
    return r.valor + r.id;
}
