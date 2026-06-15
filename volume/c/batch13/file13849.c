// fichero 13849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13849;

Registro13849 crear_registro13849(int id) {
    Registro13849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
