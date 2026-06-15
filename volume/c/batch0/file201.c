// fichero 201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro201;

Registro201 crear_registro201(int id) {
    Registro201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
