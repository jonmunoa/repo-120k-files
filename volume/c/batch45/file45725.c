// fichero 45725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45725;

Registro45725 crear_registro45725(int id) {
    Registro45725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
