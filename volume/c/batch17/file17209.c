// fichero 17209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17209;

Registro17209 crear_registro17209(int id) {
    Registro17209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
