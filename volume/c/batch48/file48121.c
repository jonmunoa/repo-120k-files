// fichero 48121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48121;

Registro48121 crear_registro48121(int id) {
    Registro48121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48121(Registro48121 r) {
    return r.valor + r.id;
}
