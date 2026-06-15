// fichero 2361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2361;

Registro2361 crear_registro2361(int id) {
    Registro2361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
