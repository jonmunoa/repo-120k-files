// fichero 18009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18009;

Registro18009 crear_registro18009(int id) {
    Registro18009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
