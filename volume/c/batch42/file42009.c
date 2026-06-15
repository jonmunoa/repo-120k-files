// fichero 42009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42009;

Registro42009 crear_registro42009(int id) {
    Registro42009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
