// fichero 13817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13817;

Registro13817 crear_registro13817(int id) {
    Registro13817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
