// fichero 13889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13889;

Registro13889 crear_registro13889(int id) {
    Registro13889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
