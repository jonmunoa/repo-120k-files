// fichero 43305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43305;

Registro43305 crear_registro43305(int id) {
    Registro43305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
