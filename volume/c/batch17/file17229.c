// fichero 17229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17229;

Registro17229 crear_registro17229(int id) {
    Registro17229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
