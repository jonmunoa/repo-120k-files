// fichero 15073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15073;

Registro15073 crear_registro15073(int id) {
    Registro15073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
