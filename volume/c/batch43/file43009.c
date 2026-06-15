// fichero 43009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43009;

Registro43009 crear_registro43009(int id) {
    Registro43009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
