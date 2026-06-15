// fichero 32009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32009;

Registro32009 crear_registro32009(int id) {
    Registro32009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
