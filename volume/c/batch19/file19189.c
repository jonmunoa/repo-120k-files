// fichero 19189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19189;

Registro19189 crear_registro19189(int id) {
    Registro19189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
