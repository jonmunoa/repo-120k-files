// fichero 17129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17129;

Registro17129 crear_registro17129(int id) {
    Registro17129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17129(Registro17129 r) {
    return r.valor + r.id;
}
