// fichero 15229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15229;

Registro15229 crear_registro15229(int id) {
    Registro15229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
