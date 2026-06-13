// fichero 8121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8121;

Registro8121 crear_registro8121(int id) {
    Registro8121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8121(Registro8121 r) {
    return r.valor + r.id;
}
