// fichero 14229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14229;

Registro14229 crear_registro14229(int id) {
    Registro14229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
