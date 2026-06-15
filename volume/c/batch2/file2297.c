// fichero 2297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2297;

Registro2297 crear_registro2297(int id) {
    Registro2297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
