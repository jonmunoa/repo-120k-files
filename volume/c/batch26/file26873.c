// fichero 26873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26873;

Registro26873 crear_registro26873(int id) {
    Registro26873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
