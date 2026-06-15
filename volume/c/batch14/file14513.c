// fichero 14513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14513;

Registro14513 crear_registro14513(int id) {
    Registro14513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
