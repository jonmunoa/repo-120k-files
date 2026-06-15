// fichero 17441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17441;

Registro17441 crear_registro17441(int id) {
    Registro17441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
