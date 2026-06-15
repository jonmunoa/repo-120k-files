// fichero 13649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13649;

Registro13649 crear_registro13649(int id) {
    Registro13649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
