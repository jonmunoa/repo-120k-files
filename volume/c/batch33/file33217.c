// fichero 33217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33217;

Registro33217 crear_registro33217(int id) {
    Registro33217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
