// fichero 23873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23873;

Registro23873 crear_registro23873(int id) {
    Registro23873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
