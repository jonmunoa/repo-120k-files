// fichero 32121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32121;

Registro32121 crear_registro32121(int id) {
    Registro32121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32121(Registro32121 r) {
    return r.valor + r.id;
}
