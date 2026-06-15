// fichero 257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro257;

Registro257 crear_registro257(int id) {
    Registro257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
