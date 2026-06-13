// fichero 33129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33129;

Registro33129 crear_registro33129(int id) {
    Registro33129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33129(Registro33129 r) {
    return r.valor + r.id;
}
