// fichero 4229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4229;

Registro4229 crear_registro4229(int id) {
    Registro4229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
