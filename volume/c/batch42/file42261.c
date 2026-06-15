// fichero 42261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42261;

Registro42261 crear_registro42261(int id) {
    Registro42261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
