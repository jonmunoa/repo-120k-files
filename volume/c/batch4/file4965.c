// fichero 4965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4965;

Registro4965 crear_registro4965(int id) {
    Registro4965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
