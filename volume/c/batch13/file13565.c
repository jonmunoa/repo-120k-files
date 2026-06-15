// fichero 13565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13565;

Registro13565 crear_registro13565(int id) {
    Registro13565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
