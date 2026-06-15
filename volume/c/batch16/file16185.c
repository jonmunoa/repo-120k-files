// fichero 16185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16185;

Registro16185 crear_registro16185(int id) {
    Registro16185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
