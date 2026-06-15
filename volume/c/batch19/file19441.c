// fichero 19441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19441;

Registro19441 crear_registro19441(int id) {
    Registro19441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
