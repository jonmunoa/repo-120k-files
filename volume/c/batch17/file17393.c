// fichero 17393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17393;

Registro17393 crear_registro17393(int id) {
    Registro17393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
