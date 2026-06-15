// fichero 48229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48229;

Registro48229 crear_registro48229(int id) {
    Registro48229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
