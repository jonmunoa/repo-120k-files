// fichero 13917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13917;

Registro13917 crear_registro13917(int id) {
    Registro13917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
