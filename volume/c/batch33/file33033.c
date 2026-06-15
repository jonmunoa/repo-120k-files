// fichero 33033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33033;

Registro33033 crear_registro33033(int id) {
    Registro33033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
