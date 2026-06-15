// fichero 2157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2157;

Registro2157 crear_registro2157(int id) {
    Registro2157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
