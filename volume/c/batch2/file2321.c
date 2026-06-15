// fichero 2321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2321;

Registro2321 crear_registro2321(int id) {
    Registro2321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
