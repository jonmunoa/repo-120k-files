// fichero 2249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2249;

Registro2249 crear_registro2249(int id) {
    Registro2249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
