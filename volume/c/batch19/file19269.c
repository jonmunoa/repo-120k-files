// fichero 19269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19269;

Registro19269 crear_registro19269(int id) {
    Registro19269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
