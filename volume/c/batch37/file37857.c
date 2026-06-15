// fichero 37857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37857;

Registro37857 crear_registro37857(int id) {
    Registro37857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
