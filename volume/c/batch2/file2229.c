// fichero 2229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2229;

Registro2229 crear_registro2229(int id) {
    Registro2229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
