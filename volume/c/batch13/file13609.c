// fichero 13609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13609;

Registro13609 crear_registro13609(int id) {
    Registro13609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
