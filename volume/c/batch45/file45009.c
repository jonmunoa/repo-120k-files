// fichero 45009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45009;

Registro45009 crear_registro45009(int id) {
    Registro45009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
