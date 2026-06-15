// fichero 13677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13677;

Registro13677 crear_registro13677(int id) {
    Registro13677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
