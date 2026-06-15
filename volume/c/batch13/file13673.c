// fichero 13673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13673;

Registro13673 crear_registro13673(int id) {
    Registro13673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
