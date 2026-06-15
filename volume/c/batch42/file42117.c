// fichero 42117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42117;

Registro42117 crear_registro42117(int id) {
    Registro42117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
