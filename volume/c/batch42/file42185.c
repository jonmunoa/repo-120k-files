// fichero 42185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42185;

Registro42185 crear_registro42185(int id) {
    Registro42185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
