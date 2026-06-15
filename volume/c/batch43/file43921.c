// fichero 43921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43921;

Registro43921 crear_registro43921(int id) {
    Registro43921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
