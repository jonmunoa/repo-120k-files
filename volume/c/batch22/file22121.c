// fichero 22121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22121;

Registro22121 crear_registro22121(int id) {
    Registro22121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
