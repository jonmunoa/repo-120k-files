// fichero 15477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15477;

Registro15477 crear_registro15477(int id) {
    Registro15477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
