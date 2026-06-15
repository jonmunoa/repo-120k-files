// fichero 13049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13049;

Registro13049 crear_registro13049(int id) {
    Registro13049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
