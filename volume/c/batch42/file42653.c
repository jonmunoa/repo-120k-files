// fichero 42653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42653;

Registro42653 crear_registro42653(int id) {
    Registro42653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
