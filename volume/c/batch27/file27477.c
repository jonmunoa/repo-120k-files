// fichero 27477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27477;

Registro27477 crear_registro27477(int id) {
    Registro27477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
