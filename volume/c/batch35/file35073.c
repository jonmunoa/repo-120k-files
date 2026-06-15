// fichero 35073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35073;

Registro35073 crear_registro35073(int id) {
    Registro35073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
