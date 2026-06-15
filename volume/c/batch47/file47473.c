// fichero 47473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47473;

Registro47473 crear_registro47473(int id) {
    Registro47473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
