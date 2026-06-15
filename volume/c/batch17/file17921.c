// fichero 17921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17921;

Registro17921 crear_registro17921(int id) {
    Registro17921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
