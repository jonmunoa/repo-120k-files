// fichero 15217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15217;

Registro15217 crear_registro15217(int id) {
    Registro15217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
