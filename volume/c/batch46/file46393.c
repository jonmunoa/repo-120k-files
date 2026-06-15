// fichero 46393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46393;

Registro46393 crear_registro46393(int id) {
    Registro46393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
