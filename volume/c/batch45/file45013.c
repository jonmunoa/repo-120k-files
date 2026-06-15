// fichero 45013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45013;

Registro45013 crear_registro45013(int id) {
    Registro45013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
