// fichero 48009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48009;

Registro48009 crear_registro48009(int id) {
    Registro48009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
