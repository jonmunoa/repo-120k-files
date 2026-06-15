// fichero 15861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15861;

Registro15861 crear_registro15861(int id) {
    Registro15861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
