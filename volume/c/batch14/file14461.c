// fichero 14461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14461;

Registro14461 crear_registro14461(int id) {
    Registro14461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
