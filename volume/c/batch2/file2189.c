// fichero 2189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2189;

Registro2189 crear_registro2189(int id) {
    Registro2189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
