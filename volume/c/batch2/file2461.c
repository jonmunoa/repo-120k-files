// fichero 2461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2461;

Registro2461 crear_registro2461(int id) {
    Registro2461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
