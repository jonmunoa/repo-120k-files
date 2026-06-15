// fichero 33509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33509;

Registro33509 crear_registro33509(int id) {
    Registro33509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
