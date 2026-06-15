// fichero 8229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8229;

Registro8229 crear_registro8229(int id) {
    Registro8229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
