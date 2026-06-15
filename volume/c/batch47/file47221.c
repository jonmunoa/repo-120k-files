// fichero 47221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47221;

Registro47221 crear_registro47221(int id) {
    Registro47221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
