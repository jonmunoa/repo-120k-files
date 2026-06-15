// fichero 32121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32121;

Registro32121 crear_registro32121(int id) {
    Registro32121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
