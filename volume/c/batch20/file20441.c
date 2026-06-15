// fichero 20441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20441;

Registro20441 crear_registro20441(int id) {
    Registro20441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
