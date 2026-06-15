// fichero 6921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6921;

Registro6921 crear_registro6921(int id) {
    Registro6921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
