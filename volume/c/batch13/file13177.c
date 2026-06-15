// fichero 13177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13177;

Registro13177 crear_registro13177(int id) {
    Registro13177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
