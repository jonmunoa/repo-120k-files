// fichero 15513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15513;

Registro15513 crear_registro15513(int id) {
    Registro15513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
