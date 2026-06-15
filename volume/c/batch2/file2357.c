// fichero 2357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2357;

Registro2357 crear_registro2357(int id) {
    Registro2357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
