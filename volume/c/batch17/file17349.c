// fichero 17349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17349;

Registro17349 crear_registro17349(int id) {
    Registro17349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
