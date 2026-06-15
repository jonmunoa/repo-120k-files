// fichero 46353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46353;

Registro46353 crear_registro46353(int id) {
    Registro46353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
