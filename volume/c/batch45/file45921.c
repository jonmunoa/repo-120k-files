// fichero 45921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45921;

Registro45921 crear_registro45921(int id) {
    Registro45921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
