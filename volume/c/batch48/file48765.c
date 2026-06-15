// fichero 48765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48765;

Registro48765 crear_registro48765(int id) {
    Registro48765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
