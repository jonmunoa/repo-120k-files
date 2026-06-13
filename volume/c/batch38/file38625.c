// fichero 38625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38625;

Registro38625 crear_registro38625(int id) {
    Registro38625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38625(Registro38625 r) {
    return r.valor + r.id;
}
