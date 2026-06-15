// fichero 35441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35441;

Registro35441 crear_registro35441(int id) {
    Registro35441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
