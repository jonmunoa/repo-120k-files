// fichero 48121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48121;

Registro48121 crear_registro48121(int id) {
    Registro48121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
