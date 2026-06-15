// fichero 13861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13861;

Registro13861 crear_registro13861(int id) {
    Registro13861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
