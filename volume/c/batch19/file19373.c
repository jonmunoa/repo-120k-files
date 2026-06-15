// fichero 19373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19373;

Registro19373 crear_registro19373(int id) {
    Registro19373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
