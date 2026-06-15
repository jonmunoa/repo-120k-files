// fichero 42673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42673;

Registro42673 crear_registro42673(int id) {
    Registro42673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
