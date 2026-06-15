// fichero 46129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46129;

Registro46129 crear_registro46129(int id) {
    Registro46129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
