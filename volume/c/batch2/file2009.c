// fichero 2009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2009;

Registro2009 crear_registro2009(int id) {
    Registro2009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
