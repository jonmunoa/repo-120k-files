// fichero 48157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48157;

Registro48157 crear_registro48157(int id) {
    Registro48157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
