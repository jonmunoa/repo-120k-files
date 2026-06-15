// fichero 26297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26297;

Registro26297 crear_registro26297(int id) {
    Registro26297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
