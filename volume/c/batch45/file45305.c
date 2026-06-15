// fichero 45305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45305;

Registro45305 crear_registro45305(int id) {
    Registro45305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
