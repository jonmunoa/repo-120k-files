// fichero 20121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20121;

Registro20121 crear_registro20121(int id) {
    Registro20121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20121(Registro20121 r) {
    return r.valor + r.id;
}
