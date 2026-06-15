// fichero 33681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33681;

Registro33681 crear_registro33681(int id) {
    Registro33681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
