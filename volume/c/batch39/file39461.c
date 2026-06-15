// fichero 39461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39461;

Registro39461 crear_registro39461(int id) {
    Registro39461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
