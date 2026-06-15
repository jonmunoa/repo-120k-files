// fichero 28461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28461;

Registro28461 crear_registro28461(int id) {
    Registro28461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
