// fichero 14393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14393;

Registro14393 crear_registro14393(int id) {
    Registro14393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
