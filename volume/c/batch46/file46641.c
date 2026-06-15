// fichero 46641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46641;

Registro46641 crear_registro46641(int id) {
    Registro46641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
