// fichero 15921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15921;

Registro15921 crear_registro15921(int id) {
    Registro15921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
