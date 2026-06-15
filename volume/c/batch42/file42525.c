// fichero 42525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42525;

Registro42525 crear_registro42525(int id) {
    Registro42525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
