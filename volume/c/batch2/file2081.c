// fichero 2081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2081;

Registro2081 crear_registro2081(int id) {
    Registro2081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
