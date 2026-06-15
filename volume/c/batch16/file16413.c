// fichero 16413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16413;

Registro16413 crear_registro16413(int id) {
    Registro16413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
