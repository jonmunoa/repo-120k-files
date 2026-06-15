// fichero 4477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4477;

Registro4477 crear_registro4477(int id) {
    Registro4477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
