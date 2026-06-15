// fichero 31441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31441;

Registro31441 crear_registro31441(int id) {
    Registro31441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
