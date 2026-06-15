// fichero 13437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13437;

Registro13437 crear_registro13437(int id) {
    Registro13437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
