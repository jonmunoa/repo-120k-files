// fichero 28229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28229;

Registro28229 crear_registro28229(int id) {
    Registro28229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
