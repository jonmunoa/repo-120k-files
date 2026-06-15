// fichero 13993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13993;

Registro13993 crear_registro13993(int id) {
    Registro13993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
