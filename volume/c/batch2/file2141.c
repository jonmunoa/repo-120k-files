// fichero 2141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2141;

Registro2141 crear_registro2141(int id) {
    Registro2141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
