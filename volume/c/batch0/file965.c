// fichero 965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro965;

Registro965 crear_registro965(int id) {
    Registro965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
