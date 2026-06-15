// fichero 13 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13;

Registro13 crear_registro13(int id) {
    Registro13 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
