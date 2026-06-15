// fichero 13749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13749;

Registro13749 crear_registro13749(int id) {
    Registro13749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
