// fichero 17261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17261;

Registro17261 crear_registro17261(int id) {
    Registro17261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
