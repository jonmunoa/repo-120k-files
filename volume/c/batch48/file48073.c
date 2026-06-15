// fichero 48073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48073;

Registro48073 crear_registro48073(int id) {
    Registro48073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
