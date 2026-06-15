// fichero 17269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17269;

Registro17269 crear_registro17269(int id) {
    Registro17269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
