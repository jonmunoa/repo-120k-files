// fichero 32401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32401;

Registro32401 crear_registro32401(int id) {
    Registro32401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
