// fichero 46257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46257;

Registro46257 crear_registro46257(int id) {
    Registro46257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
