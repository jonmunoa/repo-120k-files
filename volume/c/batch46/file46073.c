// fichero 46073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46073;

Registro46073 crear_registro46073(int id) {
    Registro46073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
