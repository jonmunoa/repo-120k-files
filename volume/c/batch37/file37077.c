// fichero 37077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37077;

Registro37077 crear_registro37077(int id) {
    Registro37077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
