// fichero 42229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42229;

Registro42229 crear_registro42229(int id) {
    Registro42229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
