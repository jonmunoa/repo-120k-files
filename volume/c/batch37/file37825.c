// fichero 37825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37825;

Registro37825 crear_registro37825(int id) {
    Registro37825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
