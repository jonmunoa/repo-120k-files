// fichero 28553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28553;

Registro28553 crear_registro28553(int id) {
    Registro28553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
