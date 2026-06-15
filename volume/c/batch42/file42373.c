// fichero 42373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42373;

Registro42373 crear_registro42373(int id) {
    Registro42373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
