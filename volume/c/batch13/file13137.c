// fichero 13137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13137;

Registro13137 crear_registro13137(int id) {
    Registro13137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
