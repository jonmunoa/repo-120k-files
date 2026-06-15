// fichero 13141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13141;

Registro13141 crear_registro13141(int id) {
    Registro13141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
