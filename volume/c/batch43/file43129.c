// fichero 43129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43129;

Registro43129 crear_registro43129(int id) {
    Registro43129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
