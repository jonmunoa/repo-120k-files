// fichero 15601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15601;

Registro15601 crear_registro15601(int id) {
    Registro15601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
