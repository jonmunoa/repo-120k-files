// fichero 47229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47229;

Registro47229 crear_registro47229(int id) {
    Registro47229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
