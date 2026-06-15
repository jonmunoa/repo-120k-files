// fichero 46761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46761;

Registro46761 crear_registro46761(int id) {
    Registro46761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
