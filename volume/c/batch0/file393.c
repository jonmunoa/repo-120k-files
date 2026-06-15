// fichero 393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro393;

Registro393 crear_registro393(int id) {
    Registro393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
