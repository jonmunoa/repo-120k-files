// fichero 27105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27105;

Registro27105 crear_registro27105(int id) {
    Registro27105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
