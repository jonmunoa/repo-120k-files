// fichero 2133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2133;

Registro2133 crear_registro2133(int id) {
    Registro2133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
