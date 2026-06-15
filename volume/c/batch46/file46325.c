// fichero 46325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46325;

Registro46325 crear_registro46325(int id) {
    Registro46325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
