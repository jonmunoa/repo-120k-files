// fichero 28921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28921;

Registro28921 crear_registro28921(int id) {
    Registro28921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
