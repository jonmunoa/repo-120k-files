// fichero 23349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23349;

Registro23349 crear_registro23349(int id) {
    Registro23349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
