// fichero 48217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48217;

Registro48217 crear_registro48217(int id) {
    Registro48217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
