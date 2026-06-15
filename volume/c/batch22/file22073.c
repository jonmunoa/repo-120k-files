// fichero 22073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22073;

Registro22073 crear_registro22073(int id) {
    Registro22073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
