// fichero 48061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48061;

Registro48061 crear_registro48061(int id) {
    Registro48061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
