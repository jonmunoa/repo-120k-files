// fichero 28357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28357;

Registro28357 crear_registro28357(int id) {
    Registro28357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
