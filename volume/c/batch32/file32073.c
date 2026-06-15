// fichero 32073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32073;

Registro32073 crear_registro32073(int id) {
    Registro32073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
