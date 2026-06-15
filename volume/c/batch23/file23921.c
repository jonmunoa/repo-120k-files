// fichero 23921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23921;

Registro23921 crear_registro23921(int id) {
    Registro23921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
