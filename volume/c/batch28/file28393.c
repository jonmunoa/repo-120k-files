// fichero 28393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28393;

Registro28393 crear_registro28393(int id) {
    Registro28393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
