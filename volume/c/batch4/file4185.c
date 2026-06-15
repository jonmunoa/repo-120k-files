// fichero 4185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4185;

Registro4185 crear_registro4185(int id) {
    Registro4185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
