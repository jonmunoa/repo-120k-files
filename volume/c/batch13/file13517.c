// fichero 13517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13517;

Registro13517 crear_registro13517(int id) {
    Registro13517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
