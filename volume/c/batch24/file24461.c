// fichero 24461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24461;

Registro24461 crear_registro24461(int id) {
    Registro24461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
