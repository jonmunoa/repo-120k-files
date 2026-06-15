// fichero 43513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43513;

Registro43513 crear_registro43513(int id) {
    Registro43513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
