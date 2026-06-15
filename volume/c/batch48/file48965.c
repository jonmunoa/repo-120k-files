// fichero 48965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48965;

Registro48965 crear_registro48965(int id) {
    Registro48965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
