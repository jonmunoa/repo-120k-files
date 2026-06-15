// fichero 15141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15141;

Registro15141 crear_registro15141(int id) {
    Registro15141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
