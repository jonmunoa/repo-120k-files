// fichero 42709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42709;

Registro42709 crear_registro42709(int id) {
    Registro42709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
