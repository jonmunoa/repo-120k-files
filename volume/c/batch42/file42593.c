// fichero 42593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42593;

Registro42593 crear_registro42593(int id) {
    Registro42593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
