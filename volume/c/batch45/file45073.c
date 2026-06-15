// fichero 45073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45073;

Registro45073 crear_registro45073(int id) {
    Registro45073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
