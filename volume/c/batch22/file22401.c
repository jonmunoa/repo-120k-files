// fichero 22401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22401;

Registro22401 crear_registro22401(int id) {
    Registro22401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
