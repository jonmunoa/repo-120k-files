// fichero 37825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37825;

Registro37825 crear_registro37825(int id) {
    Registro37825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37825(Registro37825 r) {
    return r.valor + r.id;
}
