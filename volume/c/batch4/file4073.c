// fichero 4073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4073;

Registro4073 crear_registro4073(int id) {
    Registro4073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
