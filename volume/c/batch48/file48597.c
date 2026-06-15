// fichero 48597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48597;

Registro48597 crear_registro48597(int id) {
    Registro48597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
