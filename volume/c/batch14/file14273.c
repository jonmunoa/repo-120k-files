// fichero 14273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14273;

Registro14273 crear_registro14273(int id) {
    Registro14273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
