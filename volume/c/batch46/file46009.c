// fichero 46009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46009;

Registro46009 crear_registro46009(int id) {
    Registro46009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
