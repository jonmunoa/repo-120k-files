// fichero 14121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14121;

Registro14121 crear_registro14121(int id) {
    Registro14121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
