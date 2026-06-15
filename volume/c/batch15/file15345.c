// fichero 15345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15345;

Registro15345 crear_registro15345(int id) {
    Registro15345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
