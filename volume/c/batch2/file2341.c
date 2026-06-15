// fichero 2341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2341;

Registro2341 crear_registro2341(int id) {
    Registro2341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
