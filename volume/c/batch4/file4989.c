// fichero 4989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4989;

Registro4989 crear_registro4989(int id) {
    Registro4989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
