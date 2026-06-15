// fichero 18461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18461;

Registro18461 crear_registro18461(int id) {
    Registro18461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
