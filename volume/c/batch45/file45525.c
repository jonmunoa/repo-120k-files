// fichero 45525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45525;

Registro45525 crear_registro45525(int id) {
    Registro45525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
