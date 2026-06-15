// fichero 43217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43217;

Registro43217 crear_registro43217(int id) {
    Registro43217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
