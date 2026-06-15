// fichero 19481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19481;

Registro19481 crear_registro19481(int id) {
    Registro19481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
