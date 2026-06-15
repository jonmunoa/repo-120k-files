// fichero 30073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30073;

Registro30073 crear_registro30073(int id) {
    Registro30073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
