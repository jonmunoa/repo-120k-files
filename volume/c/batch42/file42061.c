// fichero 42061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42061;

Registro42061 crear_registro42061(int id) {
    Registro42061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
