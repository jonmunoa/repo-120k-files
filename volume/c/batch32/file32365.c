// fichero 32365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32365;

Registro32365 crear_registro32365(int id) {
    Registro32365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
