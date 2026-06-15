// fichero 7365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7365;

Registro7365 crear_registro7365(int id) {
    Registro7365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
