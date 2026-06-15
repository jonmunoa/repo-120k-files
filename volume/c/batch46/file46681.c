// fichero 46681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46681;

Registro46681 crear_registro46681(int id) {
    Registro46681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
