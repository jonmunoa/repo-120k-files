// fichero 2349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2349;

Registro2349 crear_registro2349(int id) {
    Registro2349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
