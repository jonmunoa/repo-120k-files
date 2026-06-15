// fichero 14329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14329;

Registro14329 crear_registro14329(int id) {
    Registro14329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
