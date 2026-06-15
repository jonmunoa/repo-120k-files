// fichero 42589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42589;

Registro42589 crear_registro42589(int id) {
    Registro42589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
