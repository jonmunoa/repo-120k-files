// fichero 46305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46305;

Registro46305 crear_registro46305(int id) {
    Registro46305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
