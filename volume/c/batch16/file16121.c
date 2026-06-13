// fichero 16121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16121;

Registro16121 crear_registro16121(int id) {
    Registro16121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16121(Registro16121 r) {
    return r.valor + r.id;
}
