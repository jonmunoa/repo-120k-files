// fichero 15581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15581;

Registro15581 crear_registro15581(int id) {
    Registro15581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
