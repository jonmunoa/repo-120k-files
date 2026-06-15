// fichero 2873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2873;

Registro2873 crear_registro2873(int id) {
    Registro2873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
