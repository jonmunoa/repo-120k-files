// fichero 46349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46349;

Registro46349 crear_registro46349(int id) {
    Registro46349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
