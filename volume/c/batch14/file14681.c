// fichero 14681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14681;

Registro14681 crear_registro14681(int id) {
    Registro14681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
