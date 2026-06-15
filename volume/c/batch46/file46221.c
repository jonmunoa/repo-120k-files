// fichero 46221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46221;

Registro46221 crear_registro46221(int id) {
    Registro46221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
