// fichero 30297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30297;

Registro30297 crear_registro30297(int id) {
    Registro30297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
