// fichero 15729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15729;

Registro15729 crear_registro15729(int id) {
    Registro15729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
