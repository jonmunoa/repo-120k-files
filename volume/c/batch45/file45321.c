// fichero 45321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45321;

Registro45321 crear_registro45321(int id) {
    Registro45321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
