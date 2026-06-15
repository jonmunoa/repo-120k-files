// fichero 13073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13073;

Registro13073 crear_registro13073(int id) {
    Registro13073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
