// fichero 42989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42989;

Registro42989 crear_registro42989(int id) {
    Registro42989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
