// fichero 48605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48605;

Registro48605 crear_registro48605(int id) {
    Registro48605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
