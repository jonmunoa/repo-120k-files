// fichero 27073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27073;

Registro27073 crear_registro27073(int id) {
    Registro27073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
