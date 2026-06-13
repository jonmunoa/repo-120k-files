// fichero 43121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43121;

Registro43121 crear_registro43121(int id) {
    Registro43121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43121(Registro43121 r) {
    return r.valor + r.id;
}
