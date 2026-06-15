// fichero 2089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2089;

Registro2089 crear_registro2089(int id) {
    Registro2089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
