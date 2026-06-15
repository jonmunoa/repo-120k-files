// fichero 13005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13005;

Registro13005 crear_registro13005(int id) {
    Registro13005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
