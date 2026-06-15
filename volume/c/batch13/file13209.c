// fichero 13209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13209;

Registro13209 crear_registro13209(int id) {
    Registro13209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
