// fichero 7009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7009;

Registro7009 crear_registro7009(int id) {
    Registro7009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
