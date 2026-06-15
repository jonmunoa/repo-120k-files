// fichero 245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro245;

Registro245 crear_registro245(int id) {
    Registro245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
