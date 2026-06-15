// fichero 13741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13741;

Registro13741 crear_registro13741(int id) {
    Registro13741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
