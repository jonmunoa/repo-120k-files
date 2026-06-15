// fichero 48145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48145;

Registro48145 crear_registro48145(int id) {
    Registro48145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
