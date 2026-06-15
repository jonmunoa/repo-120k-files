// fichero 42401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42401;

Registro42401 crear_registro42401(int id) {
    Registro42401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
