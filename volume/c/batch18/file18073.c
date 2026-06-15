// fichero 18073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18073;

Registro18073 crear_registro18073(int id) {
    Registro18073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
