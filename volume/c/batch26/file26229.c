// fichero 26229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26229;

Registro26229 crear_registro26229(int id) {
    Registro26229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
