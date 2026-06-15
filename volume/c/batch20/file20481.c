// fichero 20481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20481;

Registro20481 crear_registro20481(int id) {
    Registro20481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
