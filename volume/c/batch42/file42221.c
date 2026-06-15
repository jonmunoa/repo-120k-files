// fichero 42221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42221;

Registro42221 crear_registro42221(int id) {
    Registro42221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
