// fichero 19221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19221;

Registro19221 crear_registro19221(int id) {
    Registro19221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
