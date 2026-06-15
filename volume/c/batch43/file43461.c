// fichero 43461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43461;

Registro43461 crear_registro43461(int id) {
    Registro43461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
