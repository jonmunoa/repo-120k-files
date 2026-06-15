// fichero 45681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45681;

Registro45681 crear_registro45681(int id) {
    Registro45681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
