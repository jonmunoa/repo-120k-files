// fichero 15109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15109;

Registro15109 crear_registro15109(int id) {
    Registro15109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
