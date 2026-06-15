// fichero 48321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48321;

Registro48321 crear_registro48321(int id) {
    Registro48321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
