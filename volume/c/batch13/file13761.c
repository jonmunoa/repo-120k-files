// fichero 13761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13761;

Registro13761 crear_registro13761(int id) {
    Registro13761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
