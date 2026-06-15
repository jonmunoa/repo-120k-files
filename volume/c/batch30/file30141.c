// fichero 30141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30141;

Registro30141 crear_registro30141(int id) {
    Registro30141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
