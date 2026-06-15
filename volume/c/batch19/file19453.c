// fichero 19453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19453;

Registro19453 crear_registro19453(int id) {
    Registro19453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
