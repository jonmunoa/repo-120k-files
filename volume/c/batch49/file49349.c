// fichero 49349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49349;

Registro49349 crear_registro49349(int id) {
    Registro49349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
