// fichero 48305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48305;

Registro48305 crear_registro48305(int id) {
    Registro48305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
