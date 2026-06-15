// fichero 19525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19525;

Registro19525 crear_registro19525(int id) {
    Registro19525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
