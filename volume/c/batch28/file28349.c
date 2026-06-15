// fichero 28349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28349;

Registro28349 crear_registro28349(int id) {
    Registro28349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
