// fichero 13285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13285;

Registro13285 crear_registro13285(int id) {
    Registro13285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
