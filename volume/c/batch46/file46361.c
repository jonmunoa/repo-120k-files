// fichero 46361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46361;

Registro46361 crear_registro46361(int id) {
    Registro46361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
