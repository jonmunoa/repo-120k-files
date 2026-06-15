// fichero 48873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48873;

Registro48873 crear_registro48873(int id) {
    Registro48873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
