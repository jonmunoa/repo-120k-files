// fichero 2525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2525;

Registro2525 crear_registro2525(int id) {
    Registro2525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
