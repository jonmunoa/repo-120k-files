// fichero 10989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10989;

Registro10989 crear_registro10989(int id) {
    Registro10989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
