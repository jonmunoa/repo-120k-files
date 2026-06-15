// fichero 26073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26073;

Registro26073 crear_registro26073(int id) {
    Registro26073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
