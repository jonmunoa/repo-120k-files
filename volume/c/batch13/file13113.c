// fichero 13113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13113;

Registro13113 crear_registro13113(int id) {
    Registro13113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
