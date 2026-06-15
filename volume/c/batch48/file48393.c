// fichero 48393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48393;

Registro48393 crear_registro48393(int id) {
    Registro48393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
