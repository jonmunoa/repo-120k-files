// fichero 40441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40441;

Registro40441 crear_registro40441(int id) {
    Registro40441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
