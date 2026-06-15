// fichero 39921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39921;

Registro39921 crear_registro39921(int id) {
    Registro39921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
