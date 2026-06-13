// fichero 33221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33221;

Registro33221 crear_registro33221(int id) {
    Registro33221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33221(Registro33221 r) {
    return r.valor + r.id;
}
