// fichero 37673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37673;

Registro37673 crear_registro37673(int id) {
    Registro37673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
