// fichero 46229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46229;

Registro46229 crear_registro46229(int id) {
    Registro46229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
