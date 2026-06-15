// fichero 13069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13069;

Registro13069 crear_registro13069(int id) {
    Registro13069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
