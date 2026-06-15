// fichero 13873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13873;

Registro13873 crear_registro13873(int id) {
    Registro13873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
