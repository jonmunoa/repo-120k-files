// fichero 42893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42893;

Registro42893 crear_registro42893(int id) {
    Registro42893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
