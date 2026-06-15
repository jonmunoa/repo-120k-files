// fichero 4273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4273;

Registro4273 crear_registro4273(int id) {
    Registro4273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
