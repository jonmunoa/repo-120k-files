// fichero 43681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43681;

Registro43681 crear_registro43681(int id) {
    Registro43681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
