// fichero 2969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2969;

Registro2969 crear_registro2969(int id) {
    Registro2969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
