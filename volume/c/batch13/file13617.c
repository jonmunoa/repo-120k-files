// fichero 13617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13617;

Registro13617 crear_registro13617(int id) {
    Registro13617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
