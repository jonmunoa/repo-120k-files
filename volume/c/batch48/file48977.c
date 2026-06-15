// fichero 48977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48977;

Registro48977 crear_registro48977(int id) {
    Registro48977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
