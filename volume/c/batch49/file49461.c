// fichero 49461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49461;

Registro49461 crear_registro49461(int id) {
    Registro49461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
