// fichero 42397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42397;

Registro42397 crear_registro42397(int id) {
    Registro42397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
