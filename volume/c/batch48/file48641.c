// fichero 48641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48641;

Registro48641 crear_registro48641(int id) {
    Registro48641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
