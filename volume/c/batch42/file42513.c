// fichero 42513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42513;

Registro42513 crear_registro42513(int id) {
    Registro42513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
