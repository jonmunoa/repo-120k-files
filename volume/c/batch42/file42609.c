// fichero 42609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42609;

Registro42609 crear_registro42609(int id) {
    Registro42609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
