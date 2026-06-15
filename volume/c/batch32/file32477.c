// fichero 32477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32477;

Registro32477 crear_registro32477(int id) {
    Registro32477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
