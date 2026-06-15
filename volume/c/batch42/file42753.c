// fichero 42753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42753;

Registro42753 crear_registro42753(int id) {
    Registro42753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
