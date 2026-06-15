// fichero 13321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13321;

Registro13321 crear_registro13321(int id) {
    Registro13321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
