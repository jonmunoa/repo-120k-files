// fichero 18157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18157;

Registro18157 crear_registro18157(int id) {
    Registro18157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
