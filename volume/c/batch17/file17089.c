// fichero 17089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17089;

Registro17089 crear_registro17089(int id) {
    Registro17089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
