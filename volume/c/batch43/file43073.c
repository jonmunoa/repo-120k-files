// fichero 43073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43073;

Registro43073 crear_registro43073(int id) {
    Registro43073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
