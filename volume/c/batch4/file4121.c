// fichero 4121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4121;

Registro4121 crear_registro4121(int id) {
    Registro4121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
