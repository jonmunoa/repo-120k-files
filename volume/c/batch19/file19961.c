// fichero 19961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19961;

Registro19961 crear_registro19961(int id) {
    Registro19961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
