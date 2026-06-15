// fichero 48421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48421;

Registro48421 crear_registro48421(int id) {
    Registro48421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
