// fichero 31989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31989;

Registro31989 crear_registro31989(int id) {
    Registro31989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
