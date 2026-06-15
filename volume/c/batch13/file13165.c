// fichero 13165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13165;

Registro13165 crear_registro13165(int id) {
    Registro13165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
