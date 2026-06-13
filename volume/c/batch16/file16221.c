// fichero 16221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16221;

Registro16221 crear_registro16221(int id) {
    Registro16221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16221(Registro16221 r) {
    return r.valor + r.id;
}
