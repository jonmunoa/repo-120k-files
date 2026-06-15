// fichero 33121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33121;

Registro33121 crear_registro33121(int id) {
    Registro33121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
