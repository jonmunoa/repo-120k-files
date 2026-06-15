// fichero 20141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20141;

Registro20141 crear_registro20141(int id) {
    Registro20141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
