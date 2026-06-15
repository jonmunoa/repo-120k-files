// fichero 23269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23269;

Registro23269 crear_registro23269(int id) {
    Registro23269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
