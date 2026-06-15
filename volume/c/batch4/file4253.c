// fichero 4253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4253;

Registro4253 crear_registro4253(int id) {
    Registro4253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
