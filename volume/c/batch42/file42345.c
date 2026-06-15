// fichero 42345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42345;

Registro42345 crear_registro42345(int id) {
    Registro42345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
