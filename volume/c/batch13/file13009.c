// fichero 13009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13009;

Registro13009 crear_registro13009(int id) {
    Registro13009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
