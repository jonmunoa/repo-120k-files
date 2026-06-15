// fichero 4921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4921;

Registro4921 crear_registro4921(int id) {
    Registro4921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
