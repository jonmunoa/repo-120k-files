// fichero 5349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5349;

Registro5349 crear_registro5349(int id) {
    Registro5349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
