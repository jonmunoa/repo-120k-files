// fichero 31229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31229;

Registro31229 crear_registro31229(int id) {
    Registro31229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
