// fichero 24477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24477;

Registro24477 crear_registro24477(int id) {
    Registro24477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
