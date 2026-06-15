// fichero 47921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47921;

Registro47921 crear_registro47921(int id) {
    Registro47921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
