// fichero 2561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2561;

Registro2561 crear_registro2561(int id) {
    Registro2561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
