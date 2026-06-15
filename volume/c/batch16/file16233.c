// fichero 16233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16233;

Registro16233 crear_registro16233(int id) {
    Registro16233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
