// fichero 7229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7229;

Registro7229 crear_registro7229(int id) {
    Registro7229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
