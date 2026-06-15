// fichero 34441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34441;

Registro34441 crear_registro34441(int id) {
    Registro34441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
