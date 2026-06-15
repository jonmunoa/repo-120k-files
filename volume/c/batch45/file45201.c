// fichero 45201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45201;

Registro45201 crear_registro45201(int id) {
    Registro45201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
