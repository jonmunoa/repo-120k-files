// fichero 13881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13881;

Registro13881 crear_registro13881(int id) {
    Registro13881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
