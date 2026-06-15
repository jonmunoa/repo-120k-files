// fichero 15961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15961;

Registro15961 crear_registro15961(int id) {
    Registro15961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
